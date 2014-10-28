/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class HKMedicalIDEditorPickerCell, _HKMedicalIDMultilineStringCell;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    _HKMedicalIDMultilineStringCell *_displayCell;
    HKMedicalIDEditorPickerCell *_editableCell;
}

- (void).cxx_destruct;
- (id)_displayCell;
- (id)_editableCell;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (void)commitEditing;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)title;

@end