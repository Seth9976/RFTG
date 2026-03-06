// 函数名称: sub_67c6a0
// 虚拟地址: 0x67c6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_67c6a0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1[1]
    void* esi = arg1[1]
    int32_t edi = arg2
    
    if (edi s< 0 || edi s>= 2)
        *(*arg1 + 0x14) = 0xe
        *(*arg1 + 0x18) = edi
        (**arg1)(arg1)
    
    if (edi == 1)
        void* i_5 = *(esi + 0x44)
        
        if (i_5 != 0)
            void* i = i_5
            
            do
                if (*(i + 0x28) != 0)
                    int32_t edx_2 = *(i + 0x38)
                    *(i + 0x28) = 0
                    edx_2(arg1, i + 0x30)
                
                i = *(i + 0x2c)
            while (i != 0)
        
        void* i_1 = *(esi + 0x48)
        *(esi + 0x44) = 0
        
        for (; i_1 != 0; i_1 = *(i_1 + 0x2c))
            if (*(i_1 + 0x28) != 0)
                int32_t ecx_3 = *(i_1 + 0x38)
                *(i_1 + 0x28) = 0
                ecx_3(arg1, i_1 + 0x30)
        
        edi = arg2
        *(esi + 0x48) = 0
    
    int32_t* i_4 = *(esi + (edi << 2) + 0x3c)
    *(esi + (edi << 2) + 0x3c) = 0
    
    if (i_4 != 0)
        int32_t* i_2
        
        do
            i_2 = *i_4
            int32_t ebx_1 = i_4[2] + i_4[1] + 0x10
            int32_t var_14_4 = ebx_1
            int32_t* i_6 = i_4
            std::_Pocma<class std::allocator<uint16_t> >(arg1)
            *(esi + 0x4c) -= ebx_1
            i_4 = i_2
        while (i_2 != 0)
        edi = arg2
    
    int32_t* result = *(esi + (edi << 2) + 0x34)
    *(esi + (edi << 2) + 0x34) = 0
    
    if (result != 0)
        int32_t* i_3
        
        do
            i_3 = *result
            int32_t ebx_2 = result[2] + result[1] + 0x10
            int32_t var_14_5 = ebx_2
            int32_t* result_1 = result
            std::_Pocma<class std::allocator<uint16_t> >(arg1)
            *(esi + 0x4c) -= ebx_2
            result = i_3
        while (i_3 != 0)
    
    return result
}
