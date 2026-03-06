// 函数名称: sub_564bd0
// 虚拟地址: 0x564bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_564bd0(void* arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = sub_553f70(*(arg1 + 0x10))
    int32_t eax_1 = sub_553f70(*(arg1 + 0x10))
    int32_t var_8 = arg3
    int32_t result
    
    if (arg3 s< arg5)
        result = arg4
        int32_t edi_1 = arg2
        int32_t ecx_3
        
        do
            int32_t ebx_1 = edi_1
            
            if (edi_1 s< result)
                int32_t edi_2 = edi_1 * eax_1
                
                do
                    int32_t eax_6
                    char edx
                    eax_6, edx = sub_554240(*(arg1 + 0xc) * var_8 + *arg1 + edi_2, edx, *(arg1 + 0x10))
                    
                    if ((eax_6 u>> 0x18).b u> 1)
                        return 0
                    
                    result = arg4
                    edi_2 += eax_1
                    ebx_1 += 1
                while (ebx_1 s< result)
                
                edi_1 = arg2
            
            ecx_3 = var_8 + 1
            var_8 = ecx_3
        while (ecx_3 s< arg5)
    
    result.b = 1
    return result
}
