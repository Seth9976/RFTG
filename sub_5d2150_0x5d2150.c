// 函数名称: sub_5d2150
// 虚拟地址: 0x5d2150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d2150(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebx_3 = sub_5cec90("SDL_XINPUT_ENABLED")
    int32_t __saved_ebx_3 = sub_5cec90("SDL_XINPUT_ENABLED")
    
    if (data_bf7804 != 0)
        sub_5cce60("Haptic: SubSystem already open.")
        return 0xffffffff
    
    int32_t __saved_ebx = 0x9080
    int32_t var_64 = 0
    int32_t var_68 = 0xbee780
    sub_5cd100()
    data_bed768 = 0
    
    if (sub_5dc630() s< 0)
        sub_5d1fd0()
        return 0xffffffff
    
    data_bf7800 = 1
    
    if (CoCreateInstance(&data_6b43f8, 0, CLSCTX_INPROC_SERVER, &data_6b4408, &data_bf7804) s< 0)
        sub_5d20e0()
        sub_5d1fd0()
        return 0xffffffff
    
    HMODULE eax_4 = GetModuleHandleW(nullptr)
    
    if (eax_4 == 0)
        sub_5d20e0()
        enum WIN32_ERROR __saved_ebx_1 = GetLastError()
        sub_5cce60("GetModuleHandle() failed with error code %d.")
        return 0xffffffff
    
    int32_t* ecx = data_bf7804
    
    if ((*(*ecx + 0x1c))(ecx, eax_4, 0x800) s< 0)
        sub_5d20e0()
        sub_5d1fd0()
        return 0xffffffff
    
    int32_t* eax_9 = data_bf7804
    
    if ((*(*eax_9 + 0x10))(eax_9, 0, sub_5d1fe0, 0, 0x101) s< 0)
        sub_5d20e0()
        sub_5d1fd0()
        return 0xffffffff
    
    int32_t eax_12
    
    if (__saved_ebx_3 != 0)
        int32_t __saved_ebx_2 = __saved_ebx_3
        eax_12 = sub_5cd570()
    
    int32_t eax_16
    
    if (__saved_ebx_3 != 0 && eax_12 == 0)
        eax_16 = data_bf7808
    else
        int32_t eax_13 = sub_5d01c0()
        int32_t eax_14 = neg.d(eax_13)
        eax_16 = sbb.d(eax_14, eax_14, eax_13 != 0) + 1
        data_bf7808 = eax_16
    
    if (eax_16 != 0)
        int32_t var_64_2 = arg1
        int32_t edi_1 = sbb.d(arg1, arg1, data_bedd50 u< 0x10004) + 1
        int32_t ebx_1 = 0
        
        while (data_bed768 u< 0x20)
            void var_18
            char var_16
            
            if (data_bedd4c(ebx_1, 1, &var_18) == 0 && (edi_1 == 0 || (var_16 & 1) != 0))
                int32_t var_68_3 = ebx_1 + 1
                char var_58[0x40]
                sub_5ce6a0(&var_58, 0x40, "XInput Controller #%u")
                void* esi_2 = zx.d(data_bed768) * 0x484
                *(esi_2 + 0xbeebcc) = sub_5cd390(&var_58)
                data_bed768 += 1
                *(esi_2 + 0xbeec00) = 1
                *(esi_2 + 0xbeec01) = ebx_1.b
            
            ebx_1 += 1
            
            if (ebx_1 u>= 4)
                break
    
    return zx.d(data_bed768)
}
