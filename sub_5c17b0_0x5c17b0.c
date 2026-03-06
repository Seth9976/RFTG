// 函数名称: sub_5c17b0
// 虚拟地址: 0x5c17b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_5c17b0(void** arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void** i = arg1
    void** result = i
    void** result_1 = result
    arg1 = nullptr
    
    if (i != 0)
        int32_t ebx
        int32_t var_10_1 = ebx
        
        do
            uint32_t eax_1 = zx.d(i[2].w)
            
            if (eax_1.w == 0x6375 || eax_1.w == 0x7075 || eax_1 == 1)
                void** i_1 = *i
                
                if (result == i)
                    result_1 = i_1
                
                *i = nullptr
                void** j
                
                do
                    j = *i
                    __free_base(i[3])
                    __free_base(i)
                    i = j
                while (j != 0)
                
                if (arg1 != 0)
                    *arg1 = i_1
                
                result = result_1
                i = i_1
            else
                arg1 = i
                i = *i
        while (i != 0)
    
    return result
}
