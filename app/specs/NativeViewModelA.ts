import {TurboModule, TurboModuleRegistry} from 'react-native';
export interface Spec extends TurboModule {
  readonly getStr: (input: string) => string;
}
export default TurboModuleRegistry.getEnforcing<Spec>('NativeViewModelA');

