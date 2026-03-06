// 函数名称: sub_5b6721
// 虚拟地址: 0x5b6721
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b6721(int32_t* arg1 @ edi, void* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        _inconsistency()
        noreturn
    
    char var_5 = 0
    int32_t i = 0
    
    if (*arg1 s> 0)
        int32_t var_c_1 = 0
        
        do
            int32_t* eax_2 = *(*(arg2 + 0x1c) + 0xc)
            int32_t j = *eax_2
            void* esi_1 = &eax_2[1]
            
            while (j s> 0)
                if (sub_5b64d4(arg1[1] + var_c_1, *esi_1, *(arg2 + 0x1c)) != 0)
                    var_5 = 1
                    break
                
                j -= 1
                esi_1 += 4
            
            i += 1
            var_c_1 += 0x10
        while (i s< *arg1)
    
    int32_t result
    result.b = var_5
    return result
}
