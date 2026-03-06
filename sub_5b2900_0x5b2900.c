// 函数名称: sub_5b2900
// 虚拟地址: 0x5b2900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_5b2900(int32_t* arg1, int32_t* arg2 @ edi, uint32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    uint32_t result_1 = *arg2
    uint32_t result
    int32_t* entry_ebx
    
    if ((entry_ebx[3].b & 0x40) == 0 || entry_ebx[2] != 0)
        *arg2 = 0
        
        if (arg4 s<= 0)
            result = result_1
            *arg2 = result
        else
            do
                uint32_t eax
                eax.b = *arg3
                arg4 -= 1
                int32_t edx
                result, edx = sub_5ad514(eax, edx, entry_ebx, arg1)
                arg3 += 1
                
                if (*arg1 == 0xffffffff)
                    if (*arg2 != 0x2a)
                        break
                    
                    result.b = 0x3f
                    result, edx = sub_5ad514(result, edx, entry_ebx, arg1)
            while (arg4 s> 0)
            
            if (*arg2 == 0)
                result = result_1
                *arg2 = result
    else
        result = arg4
        *arg1 += result
    
    return result
}
