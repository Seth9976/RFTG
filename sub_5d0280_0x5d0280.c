// 函数名称: sub_5d0280
// 虚拟地址: 0x5d0280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d0280()
{
    // 第一条实际指令: int32_t __saved_esi_2 = sub_5cec90("SDL_XINPUT_ENABLED")
    int32_t __saved_esi_2 = sub_5cec90("SDL_XINPUT_ENABLED")
    
    if (__saved_esi_2 != 0)
        int32_t __saved_esi_1 = __saved_esi_2
        int32_t eax = sub_5cd570()
        
        if (eax == 0)
            data_8b9784 = eax
    
    if (sub_5dc630() s< 0)
        return sub_5cee80() __tailcall
    
    data_bedd24 = 1
    
    if (CoCreateInstance(&data_6b43f8, 0, CLSCTX_INPROC_SERVER, &data_6b4408, &data_bedd28) s< 0)
        sub_5d0070()
        return sub_5cee80() __tailcall
    
    HMODULE eax_6 = GetModuleHandleW(nullptr)
    
    if (eax_6 == 0)
        sub_5d0070()
        enum WIN32_ERROR var_8 = GetLastError()
        sub_5cce60("GetModuleHandle() failed with error code %d.")
        return 0xffffffff
    
    int32_t* ecx_4 = data_bedd28
    
    if ((*(*ecx_4 + 0x1c))(ecx_4, eax_6, 0x800) s< 0)
        sub_5d0070()
        return sub_5cee80() __tailcall
    
    if (data_8b9784 != 0 && sub_5d01c0() == 0xffffffff)
        data_8b9784 = 0
    
    data_bedd38 = sub_5d1140()
    data_bedd34 = sub_5deea0()
    data_bedd2c = 1
    sub_5cf5f0()
    
    if (data_bedd3c == 0)
        data_bedd40 = 0
        data_bedd3c = sub_5d4650(sub_5cf080, "SDL_joystick", 0)
    
    return sub_5cf300() __tailcall
}
