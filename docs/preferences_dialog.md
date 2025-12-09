## Preferences dialog

![Prefereces_dialog](https://raw.githubusercontent.com/shriprem/NestedDSV/master/images/preferences_dialog.png)

### Clear button click unchecks Auto-detect File Type [_Default: Unchecked_]
* When this box is checked, clicking the _Clear_ button on the plugin panel will also uncheck the _Auto-detect File Type_ box on the plugin panel, thereby totally clearing the NestedDSV data visualization.
* When this is unchecked and the _Auto-detect File Type_ box on the plugin panel is checked, clicking the _Clear_ button on the plugin panel will just re-render the NestedDSV data visualization.

### Closing plugin panel clears visualization [_Default: Checked_]
* When this box is checked, closing the plugin panel will also clear the NestedDSV data visualization of the current document in Notepad++.
* When this box is unchecked, closing the plugin panel will _NOT_ clear the NestedDSV data visualization of the current document in Notepad++.

### Hop Right: Move to the left edge of the following field [_Default: Unchecked_]
* When this box is unchecked, clicking the right [Hop](https://github.com/shriprem/NestedDSV/blob/master/docs/field_navigation.md#hop-field) button will move cursor to the right edge of the current field. If already at the right edge of the field, the cursor will be moved to the right edge of the following field.
* When this box is checked, clicking the right [Hop](https://github.com/shriprem/NestedDSV/blob/master/docs/field_navigation.md#hop-field) button will move cursor to the left edge of the following field.

### Fold Line Color & Alpha
* Click the colored square to specify the color for the lines that indicate the folding block headers. [_Notepad++ default color: Black_]
* Adjust the slider to specify the color transparency (alpha) for the lines that indicate the folding block headers. [_Notepad++ default value: Opaque_]

_NOTE: Both the color and transparency (alpha) settings will apply globally to all documents in Notepad++._
