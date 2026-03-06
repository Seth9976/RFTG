// 函数名称: sub_51acf0
// 虚拟地址: 0x51acf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __stdcallsub_51acf0(HINSTANCE arg1, enum SHOW_WINDOW_CMD arg2)
{
    // 第一条实际指令: SetProcessDPIAware()
    SetProcessDPIAware()
    sub_51ac50(arg1)
    int32_t result = sub_5198c0(arg1, arg2)
    
    if (result == 0)
        return result
    
    MSG msg
    PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)
    
    while (msg.message != 0x12)
        if (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
            if (sub_543930(&msg) == 0)
                TranslateMessage(&msg)
                DispatchMessageA(&msg)
        else if (data_27e7bc0 == 0)
            void* eax_4 = data_27e7bbc
            data_27e7bc0 = 1
            
            if (*(eax_4 + 0x1c) != 0)
                *(eax_4 + 0x1c) = 0
                
                if (*(eax_4 + 0x2c) != 0)
                    sub_4d32e0()
                    eax_4 = data_27e7bbc
                
                if (*(eax_4 + 0x28) != 0)
                    *(eax_4 + 0x2c) = 0
                else
                    *(eax_4 + 0x20)
                    sub_4d31e0()
                    void* eax_5 = data_27e7bbc
                    int32_t* ecx_2 = data_27e7fd0
                    *(eax_5 + 0x2c) = 1
                    (*(*ecx_2 + 0x38))(*(eax_5 + 0x24))
                    eax_4 = data_27e7bbc
            
            if (*(eax_4 + 0x2c) != 0)
                sub_4c9e90()
            
            data_27e7bc0 = 0
    
    sub_4c9bb0()
    return msg.wParam
}
