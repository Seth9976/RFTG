// 函数名称: sub_687658
// 虚拟地址: 0x687658
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_687658(int32_t* arg1, int32_t* arg2 @ edi, int16_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result_1 = *arg2
    int32_t result
    uint32_t entry_ebx
    
    if ((*(entry_ebx + 0xc) & 0x40) == 0 || *(entry_ebx + 8) != 0)
        *arg2 = 0
        
        if (arg4 s<= 0)
            result = result_1
            *arg2 = result
        else
            do
                arg4 -= 1
                uint32_t var_10_1 = zx.d(*arg3)
                int16_t edx
                result, edx = sub_687629(entry_ebx, arg1, edx)
                arg3 = &arg3[1]
                
                if (*arg1 == 0xffffffff)
                    if (*arg2 != 0x2a)
                        break
                    
                    result, edx = sub_687629(entry_ebx, arg1, edx)
            while (arg4 s> 0)
            
            if (*arg2 == 0)
                result = result_1
                *arg2 = result
    else
        result = arg4
        *arg1 += result
    
    return result
}
