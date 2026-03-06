// 函数名称: sub_5ddf60
// 虚拟地址: 0x5ddf60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ddf60(void* arg1, void* arg2)
{
    // 第一条实际指令: PWSTR lpszDeviceName = *(arg1 + 0x40)
    PWSTR lpszDeviceName = *(arg1 + 0x40)
    DEVMODEW* lpDevMode = *(arg2 + 0x10)
    enum DISP_CHANGE eax_1 =
        ChangeDisplaySettingsExW(lpszDeviceName, lpDevMode, nullptr, CDS_FULLSCREEN, nullptr)
    
    if (eax_1 == DISP_CHANGE_SUCCESSFUL)
        EnumDisplaySettingsW(lpszDeviceName, ENUM_CURRENT_SETTINGS, lpDevMode)
        return 0
    
    char const* const ecx_1 = "Unknown reason"
    
    if (eax_1 + 5 u<= 4)
        switch (eax_1)
            case 0xfffffffb
                char const* const var_10_2 = "DISP_CHANGE_BADPARAM"
                sub_5cce60("ChangeDisplaySettingsEx() failed: %s")
                return 0xffffffff
            case 0xfffffffc
                char const* const var_10 = "DISP_CHANGE_BADFLAGS"
                sub_5cce60("ChangeDisplaySettingsEx() failed: %s")
                return 0xffffffff
            case ~DISP_CHANGE_RESTART
                char const* const var_10_1 = "DISP_CHANGE_BADMODE"
                sub_5cce60("ChangeDisplaySettingsEx() failed: %s")
                return 0xffffffff
            case ~DISP_CHANGE_SUCCESSFUL
                ecx_1 = "DISP_CHANGE_FAILED"
    
    char const* const var_10_3 = ecx_1
    sub_5cce60("ChangeDisplaySettingsEx() failed: %s")
    return 0xffffffff
}
