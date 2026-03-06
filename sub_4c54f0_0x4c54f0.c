// 函数名称: sub_4c54f0
// 虚拟地址: 0x4c54f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_4c54f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_27e7a6f == 0)
        data_27e7a6f = 1
        sub_4c5780("\nUnhandled Exception\n")
        sub_4c53a0(arg1)
        void* eax_2 = data_27e7fd0
        char const* const lpCaption = "Unhandled Exception"
        
        if (eax_2 != 0)
            lpCaption = *(eax_2 + 0xc)
        
        sub_4c5780("Generating steam mini dump\n")
        SteamAPI_SetMiniDumpComment(lpCaption)
        SteamAPI_WriteMiniDump(**arg1, arg1, 0)
        sub_4c5780("\nStack:\n")
        int32_t var_2c[0x9]
        sub_5193d0(arg1[1], &var_2c)
        sub_519220(&var_2c)
        int32_t* eax_4 = data_27e7aac
        
        if (eax_4 != 0)
            sub_5a8c61(eax_4)
        
        HWND hWnd = GetForegroundWindow()
        uint32_t lpdwProcessId
        GetWindowThreadProcessId(hWnd, &lpdwProcessId)
        uint32_t eax_6 = GetCurrentProcessId()
        
        if (lpdwProcessId != eax_6)
            hWnd = nullptr
        
        MessageBoxA(hWnd, 
            "Oh no! There was an Unhandled Exception!\n\nThe log.txt file has more information.", 
            lpCaption, MB_OK)
        data_27e7a6f = 0
    else
        sub_4c5780("Exception during exception processing.\n")
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
