// 函数名称: sub_67c7a0
// 虚拟地址: 0x67c7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67c7a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi = 1
    int32_t var_8_1 = 1
    int32_t temp0_1
    
    do
        void* esi_1 = arg1[1]
        
        if (edi s< 0 || edi s>= 2)
            *(*arg1 + 0x14) = 0xe
            *(*arg1 + 0x18) = edi
            (**arg1)(arg1)
        
        if (edi == 1)
            for (void* i = *(esi_1 + 0x44); i != 0; i = *(i + 0x2c))
                if (*(i + 0x28) != 0)
                    int32_t edx_2 = *(i + 0x38)
                    *(i + 0x28) = 0
                    edx_2(arg1, i + 0x30)
            
            void* i_1 = *(esi_1 + 0x48)
            *(esi_1 + 0x44) = 0
            
            for (; i_1 != 0; i_1 = *(i_1 + 0x2c))
                if (*(i_1 + 0x28) != 0)
                    int32_t ecx_3 = *(i_1 + 0x38)
                    *(i_1 + 0x28) = 0
                    ecx_3(arg1, i_1 + 0x30)
            
            edi = var_8_1
            *(esi_1 + 0x48) = 0
        
        int32_t* i_4 = *(esi_1 + (edi << 2) + 0x3c)
        *(esi_1 + (edi << 2) + 0x3c) = 0
        
        if (i_4 != 0)
            int32_t* i_2
            
            do
                i_2 = *i_4
                int32_t* ecx_5 = i_4[2] + i_4[1] + 0x10
                int32_t* var_18_4 = ecx_5
                int32_t* i_6 = i_4
                std::_Pocma<class std::allocator<uint16_t> >(arg1)
                *(esi_1 + 0x4c) -= ecx_5
                i_4 = i_2
            while (i_2 != 0)
            edi = var_8_1
        
        int32_t* i_5 = *(esi_1 + (edi << 2) + 0x34)
        *(esi_1 + (edi << 2) + 0x34) = 0
        
        if (i_5 != 0)
            int32_t* i_3
            
            do
                i_3 = *i_5
                int32_t* ecx_8 = i_5[2] + i_5[1] + 0x10
                int32_t* var_18_5 = ecx_8
                int32_t* i_7 = i_5
                std::_Pocma<class std::allocator<uint16_t> >(arg1)
                *(esi_1 + 0x4c) -= ecx_8
                i_5 = i_3
            while (i_3 != 0)
            edi = var_8_1
        
        temp0_1 = edi
        edi -= 1
        var_8_1 = edi
    while (temp0_1 - 1 s>= 0)
    int32_t var_18_6 = 0x54
    int32_t var_1c_3 = arg1[1]
    int32_t result = std::_Pocma<class std::allocator<uint16_t> >(arg1)
    int32_t* var_24 = arg1
    arg1[1] = 0
    return result
}
