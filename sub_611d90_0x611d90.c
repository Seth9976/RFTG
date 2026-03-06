// 函数名称: sub_611d90
// 虚拟地址: 0x611d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_611d90(int32_t arg1, int32_t arg2, int32_t arg3 @ edi, char* arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t i = arg1
    uint32_t result = arg2 u>> 0x10
    var_8:3.b = result.b
    var_8:2.b = (arg2 u>> 8).b
    
    if (i != 0)
        uint32_t ebx
        uint32_t var_10_1 = ebx
        
        do
            char* eax_1 = arg4
            i -= 1
            int32_t j_1 = arg3
            
            if (arg3 != 0)
                int32_t j
                
                do
                    *eax_1 = var_8:3.b
                    eax_1[1] = var_8:2.b
                    eax_1[2] = arg2.b
                    eax_1 = &eax_1[3]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            result = arg5
            arg4 = &arg4[result]
        while (i != 0)
    
    return result
}
