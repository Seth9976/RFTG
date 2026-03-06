// 函数名称: sub_67c8e0
// 虚拟地址: 0x67c8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_67c8e0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    uint32_t arg_4
    uint32_t edi = arg_4
    uint32_t var_18 = edi
    *(edi + 4) = 0
    int32_t var_1c = 0x54
    var_8 = 0
    void* (** eax)(void*** arg1, int32_t arg2, int32_t arg3) =
        std::_Pocma<class std::allocator<char> >(edi)
    
    if (eax == 0)
        *(*edi + 0x14) = 0x36
        *(*edi + 0x18) = 0
        (**edi)(edi, edi)
    
    *eax = sub_67bcc0
    eax[1] = sub_67be10
    eax[2] = sub_67bee0
    eax[3] = sub_67bf90
    eax[4] = sub_67c040
    eax[5] = sub_67c0b0
    eax[6] = sub_67c120
    eax[7] = sub_67c400
    eax[8] = sub_67c550
    eax[9] = sub_67c6a0
    eax[0xa] = sub_67c7a0
    eax[0xc] = 0x3b9aca00
    eax[0xb] = var_8
    __builtin_memset(&eax[0xd], 0, 0x18)
    eax[0x13] = 0x54
    *(edi + 4) = eax
    void* eax_3 = sub_5b6025("JPEGMEM")
    
    if (eax_3 != 0)
        void* var_18_2 = &arg_4:3
        int32_t* var_1c_2 = &var_8
        arg_4:3.b = 0x78
        eax_3 = sub_5a957c(eax_3, "%ld%c")
        
        if (eax_3 s> 0)
            eax_3.b = arg_4:3.b
            
            if (eax_3.b == 0x6d || eax_3.b == 0x4d)
                int32_t eax_6 = var_8 * 0xf4240
                eax[0xb] = eax_6
                return eax_6
            
            eax_3 = var_8 * 0x3e8
            eax[0xb] = eax_3
    
    return eax_3
}
