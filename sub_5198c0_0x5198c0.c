// 函数名称: sub_5198c0
// 虚拟地址: 0x5198c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5198c0(HINSTANCE arg1, enum SHOW_WINDOW_CMD arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    PWSTR lpCmdLine = GetCommandLineW()
    int32_t numArgs
    PWSTR* hMem = CommandLineToArgvW(lpCmdLine, &numArgs)
    int32_t numArgs_1 = numArgs
    data_3078808 = 3
    
    if (sub_519590(hMem, numArgs_1) != 0)
        data_3078808 = 1
    
    if (sub_519590(hMem, numArgs_1) != 0)
        data_3078808 = 2
    
    if (sub_519590(hMem, numArgs_1) != 0)
        data_3078808 = 3
    
    bool cond:0 = data_be1067 == 0
    data_27e7fd0 = &data_be1040
    data_be1044 = "RtfG.xpack"
    data_be1048 = "RftG"
    data_be104c = "Race for the Galaxy"
    data_be1064 = 1
    
    if (not(cond:0))
        data_be1060 = 1
        data_be105c = 4
    
    data_be1061 = 1
    data_be1065 = 1
    data_be1068 = 1
    data_be1050 = "RftG.Steam.1529"
    data_be106e = 0
    
    if (sub_519590(hMem, numArgs_1) != 0)
        data_be1054 = 0x780
        data_be1058 = 0x438
    
    if (sub_519590(hMem, numArgs_1) != 0)
        sub_4c5680("VR disabled")
        *(data_27e7fd0 + 0x27) = 0
        numArgs_1 = numArgs
    
    if (sub_519590(hMem, numArgs_1) != 0)
        sub_4c5680("Has db")
        *(data_27e7fd0 + 0x2a) = 1
        numArgs_1 = numArgs
    
    if (sub_519590(hMem, numArgs_1) != 0)
        *(data_27e7fd0 + 0x27) = 0
        numArgs_1 = numArgs
    else if (sub_519590(hMem, numArgs_1) != 0)
        *(data_27e7fd0 + 0x27) = 0
        numArgs_1 = numArgs
    else if (sub_519590(hMem, numArgs_1) != 0)
        *(data_27e7fd0 + 0x27) = 0
        numArgs_1 = numArgs
    
    if (sub_519590(hMem, numArgs_1) != 0)
        *(data_27e7fd0 + 0x2e) = 1
        numArgs_1 = numArgs
    
    if (*(data_27e7fd0 + 0x27) != 0)
        data_30785cc = 1
        
        if (sub_519590(hMem, numArgs_1) != 0)
            data_30785cc = 3
        
        if (sub_519590(hMem, numArgs_1) != 0)
            data_30785cc = 5
    
    sub_519500()
    sub_4c98e0()
    PWSTR lpCmdLine_1 = lpCmdLine
    sub_4c57f0("command line: %S")
    int32_t numArgs_2 = numArgs
    
    if (sub_519590(hMem, numArgs_2) == 0)
        if (sub_519590(hMem, numArgs_2) != 0)
            sub_5a7d4b("building assets...\n")
            data_30785f1 = 1
            sub_567bc0(sub_51bfc0())
            sub_5a7d4b("Done!\n")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        if (sub_519590(hMem, numArgs_2) != 0)
            sub_5a7d4b("building assets...\n")
            data_30785f1 = 1
            sub_51bfc0()
            sub_536910()
            sub_5a7d4b("Done!\n")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        LocalFree(hMem)
        HWND hWnd = sub_5195f0(arg1)
        
        if (hWnd != 0)
            int32_t* ecx_11 = data_27e7fd8
            data_27e7bc1 = 1
            data_30785e0 = hWnd
            
            if (ecx_11 != 0)
                (*(*ecx_11 + 8))()
                data_26a44f0 = 0
            
            int32_t* ecx_12 = data_3078804
            
            if (ecx_12 != 0)
                (*(*ecx_12 + 8))(data_30785e0)
            
            ShowWindow(hWnd, arg2)
            UpdateWindow(hWnd)
            SetTimer(nullptr, 1, 0xa, sub_5194d0)
            (*(*data_27e7fd0 + 0xc))()
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
    else
        sub_5a7d4b("building emscripten assets...\n")
        data_30785f3 = 1
        data_30785f1 = 1
        sub_567bc0(sub_51bfc0())
        sub_5a7d4b("Done!\n")
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
