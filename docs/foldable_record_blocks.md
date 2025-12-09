# Foldable Record Blocks

![image](https://raw.githubusercontent.com/shriprem/NestedDSV/master/images/foldable_apollo.png)

**Apollo Missions (Pipe) Sample File, with folding applied.**

## Contents
1. [Concept](#Concept)
2. [Scheme](#Scheme)
3. [Fold Structures Editor](#Fold-Structures-Editor)
4. [Definitions (_INI File_)](#Definitions-INI-File)
5. [Sample Files with Folding](#Sample-Files-with-Folding)

## Concept
In a file with _Foldable Record Blocks_:
* Record types that can be designated as block headers are **_folding nodes_**. Every record block starts with a _folding node_.
* Record types that are merely members of a record block are **_leaf nodes_**. Some _leaf node_ records can be designated as terminators of specific record blocks.

### Nested Record Blocks
* When there are _folding node_ records with varying levels of priority (or precedence), a nested structure of record blocks will emerge.

* A nested structure can also emerge if _folding node_ records with equal precedence are also **_recursive_**.

  To understand this latter case better with an analogy in a programming language, consider the `IF ... THEN` conditional block and the `DO WHILE ...` iteration block. Both control blocks can be recursive. Both will also have same level of precedence. That is, an `IF ... THEN` block can enclose a `DO WHILE ...` block or the other way around, yielding many levels of nesting in multitudinous ways.

### Record Block Termination
* **_Multiple Block Termination (End of File)_**: At the end of file, all record blocks are automatically terminated.

* **_Multiple Block Termination (Outranking)_**: A record block with _higher_ precedence will terminate _multiple_ levels of nested record blocks with _lower_ precedence and immediately preceding it in the data file.

* **_Single Block Termination (Peer & Non-Recursive)_**: A new record block will terminate a _single_ level of record block that immediately precedes it in the data file if that preceding block has an _equal_ precedence while also being _non-recursive_.

* **_Innermost Nested Block Termination (Block-ending Leaf Node Record)_**: A _leaf node_ record can terminate a record block for which it has been designated as a block-ending record. If a _leaf node_ record has been designated as a block-ending record for multiple record types with differing or nested levels of precedence or recursion, only the still-open, innermost applicable block will be terminated.

  To understand this last case better with an analogy in a programming language, consider multiple levels of nested `IF ... THEN` blocks. The first `END IF` will terminate the innermost `IF ... THEN` block. The next `END IF` will terminate the enclosing, next innermost `IF ...THEN` block, and so on.

---

## Scheme
A **_Foldable Record Scheme_** can be associated with a single NestedDSV File Type as defined in the [File Type Metadata Editor](https://github.com/shriprem/NestedDSV/blob/master/docs/file_type_config_dialog.md).

With that associated _File Type_ as the reference basis, you will then need to specify:
1. **_Header Records_**: The _Record Types_ that will serve as block headers i.e., _folding nodes_.

2. **_Block Priority_**: A numeric value denoting the order priority for a record block. A block with _lower_ numeric value of priority will enclose a block with _higher_ numeric value of priority. i.e., A block with _lower_ numeric value of priority will have a _higher_ precedence.

3. **_Block Recursiveness_**: This flag will specify whether specific record blocks with same priority value will nest inside each other. For most data files, record blocks will be _non-recursive_.

4. **_Block Termination_**: This will be an optional list of _Record Types_ that will terminate a specific record block.

---

## Fold Structures Editor

![image](https://raw.githubusercontent.com/shriprem/NestedDSV/master/images/fold_struct_editor.png)

For more information, see: [Fold Structures Editor](https://github.com/shriprem/NestedDSV/blob/master/docs/fold_structs_editor.md)

---

## Definitions (_INI File_)
The definition schemes for record blocks will reside in the new `FoldStructs.ini` file. Upon the first run of Notepad++ after upgrading the _NestedDSV_ dll with the _Foldable Record Blocks_ feature, this new file will get copied into one of the two folder locations:
1. `%APPDATA%/Notepad++/plugins/Config/NestedDSV/` (_for **non-portable** installs of Notepad++_)

    OR

2. `<Notepad++_executable_folder>/plugins/Config/NestedDSV/` (_for **portable** installs of Notepad++_)


### Base section
* In the `Base` section, the `FoldStructCount` key value should indicate the number of _File Types_ that are being defined with folding record blocks.


### File Type sections:
* Each _File Type_ will have its own section in the format **FS**_nnn_, starting with `FS001`.

* `FileType`: This value must exactly match the corresponding _File Type_ section name in the `Visualizer.ini` file.

* `FileLabel`: This value must _optionally_ match the corresponding `FileLabel` value in the `Visualizer.ini` file.

* `FoldLevelAuto`: This value can be either `Y` or `N`. This will specify if the plugin should automatically try to do a full file scan and apply the specified folding structure for the matching _File Type_ after a file loads in the Notepad++ editor, . Recommend setting this to `N` for _File Types_ with likely large data files, when this process can take a long time.

* `HeaderRecords`: A comma-separated list of _Record Types_ (see **_Header Records_** under: [Scheme](#scheme)). The _Record Types_ in the list must exactly match the corresponding _Record Types_ of associated the _File Type_ in the `Visualizer.ini` file.

* `RECnnn_Priority`: A numeric value (see **_Block Priority_** under: [Scheme](#scheme)).

  Recommend using values in increments of  10, so that blocks that need to be added at a later time can be specified with intermediate values. For example, the outermost record block can have a priority of _10_, the next record block that may be enclosed within it can have a priority of _20_, and so on.

* `RECnnn_Recursive`: This value can be either `Y` or `N` (see **_Block Recursiveness_** under: [Scheme](#scheme)). For most data files, this value will be `N`.

* `RECnnn_EndRecords`: An _optional_, comma-separated list of _Record Types_ (see **_Block Termination_** under: [Scheme](#scheme)). The _Record Types_ in the list must exactly match the corresponding _Record Types_ of associated the _File Type_ in the `Visualizer.ini` file.

---

**See also**: [Extract Configuration Data](https://github.com/shriprem/NestedDSV/blob/master/docs/config_extract_dialog.md) | [Append Configuration Data](https://github.com/shriprem/NestedDSV/blob/master/docs/config_append_dialog.md)