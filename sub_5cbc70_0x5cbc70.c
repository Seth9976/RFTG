// 函数名称: sub_5cbc70
// 虚拟地址: 0x5cbc70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cbc70(uint32_t arg1)
{
    // 第一条实际指令: uint32_t edi = arg1
    uint32_t edi = arg1
    void* var_8 = nullptr
    void* const var_c = nullptr
    
    while (true)
        int32_t ecx_1 = sub_5dadf0(edi + 0x90)
        void* i = *(edi + 0x98)
        *(edi + 0x98) = 0
        
        if (var_8 != 0)
            ecx_1 = *(edi + 0x9c)
            *(var_c + 0x18) = ecx_1
            *(edi + 0x9c) = var_8
        
        sub_5dae20(edi + 0x90)
        
        while (i != 0)
            void* i_1 = i
            i = *(i + 0x18)
            ecx_1 = sub_5cbc30(ecx_1, i_1, edi)
        
        var_8 = nullptr
        var_c = nullptr
        
        if (*(edi + 0xa0) == 0)
            break
        
        arg1 = 0xffffffff
        uint32_t eax_3 = sub_5cc0d0()
        
        while (*(edi + 0xa4) != 0)
            void* esi_1 = *(edi + 0xa4)
            *(esi_1 + 0x10)
            
            if (eax_3 - *(esi_1 + 0x10) s< 0)
                arg1 = *(esi_1 + 0x10) - eax_3
                break
            
            *(edi + 0xa4) = *(esi_1 + 0x18)
            int32_t eax_6
            int32_t ecx_5
            
            if (*(esi_1 + 0x14) == 0)
                eax_6, ecx_5 = (*(esi_1 + 4))(*(esi_1 + 0xc), *(esi_1 + 8))
            
            if (*(esi_1 + 0x14) != 0 || eax_6 == 0)
                if (var_8 == 0)
                    var_8 = esi_1
                
                if (var_c != 0)
                    *(var_c + 0x18) = esi_1
                
                var_c = esi_1
                *(esi_1 + 0x14) = 1
            else
                *(esi_1 + 0x10) = eax_6 + eax_3
                sub_5cbc30(ecx_5, esi_1, edi)
        
        uint32_t eax_10 = sub_5cc0d0() - eax_3
        
        if (eax_10 u<= arg1)
            arg1 -= eax_10
        else
            arg1 = 0
        
        sub_5dace0(*(edi + 0x94), arg1)
    
    return 0
}
