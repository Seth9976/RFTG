// 函数名称: sub_49d1f0
// 虚拟地址: 0x49d1f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_49d1f0()
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    int32_t var_8 = 0
    int32_t var_c = 0
    void* entry_ebx
    
    if (*(entry_ebx + 0x45a) == 3)
        int32_t i_5 = sx.d(*(entry_ebx + 0x458))
        
        if (i_5 s> 0)
            result = entry_ebx + 0xa3
            int32_t i_4 = i_5
            int32_t i
            
            do
                int32_t ecx_1 = sx.d(*result)
                
                if (ecx_1 s> var_8)
                    var_8 = ecx_1
                
                result += 0xb4
                i = i_4
                i_4 -= 1
            while (i != 1)
            
            if (var_8 != i_4)
                if (i_5 s> 0)
                    result = entry_ebx + 0xa3
                    int32_t i_3 = i_5
                    int32_t i_1
                    
                    do
                        if (sx.d(*result) == var_8)
                            var_c += 1
                        
                        result += 0xb4
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                int32_t i_2 = 0
                
                if (i_5 s> 0)
                    result = entry_ebx + 0xa4
                    
                    do
                        if (sx.d(*(result - 1)) s< var_8)
                            *result = 0
                        
                        if (var_c s> 1)
                            *result = 0
                        
                        i_2 += 1
                        result += 0xb4
                    while (i_2 s< sx.d(*(entry_ebx + 0x458)))
    
    return result
}
