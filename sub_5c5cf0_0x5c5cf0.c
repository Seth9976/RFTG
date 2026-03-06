// 函数名称: sub_5c5cf0
// 虚拟地址: 0x5c5cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c5cf0(void* arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: if ((*(arg1 + 0x18) & 2) != 0)
    if ((*(arg1 + 0x18) & 2) != 0)
        zip_error_set(arg1 + 8, 0x19, 0)
        return 0xffffffff
    
    int32_t eax = *(arg1 + 0x30)
    int32_t ecx = *(arg1 + 0x34)
    int32_t result = arg2
    
    if ((result & arg3) != 0xffffffff)
        goto label_5c5d7a
    
    int32_t result_1
    int32_t edx_3
    
    if ((arg6 & 0x2000) == 0)
    label_5c5d59:
        result_1, edx_3 = sub_5c6500(arg1)
        
        if (edx_3 s> 0)
            goto label_5c5d73
        
        if (edx_3 s>= 0 && result_1 u>= 0)
            goto label_5c5d73
    else
        result_1, edx_3 = sub_5c1f10(arg1, arg4, arg6.b, nullptr)
        
        if ((result_1 & edx_3) == 0xffffffff)
            goto label_5c5d59
        
    label_5c5d73:
        result = result_1
        arg3 = edx_3
    label_5c5d7a:
        
        if (arg4 != 0 && sub_5c6310(arg1, result, arg3, arg4, arg6) != 0)
            if (*(arg1 + 0x30) != eax || *(arg1 + 0x34) != ecx)
                sub_5c38a0((result << 4) + *(arg1 + 0x40))
                *(arg1 + 0x30) = eax
                *(arg1 + 0x34) = ecx
            
            return 0xffffffff
        
        int32_t edi_3 = result << 4
        sub_5c5ec0(*(arg1 + 0x40) + edi_3)
        int32_t* eax_5 = *(arg1 + 0x40)
        int32_t ecx_5 = eax_5[result * 4]
        
        if (ecx_5 == 0)
            *(*(arg1 + 0x40) + edi_3 + 8) = arg5
            return result
        
        char* eax_6 = eax_5[result * 4 + 1]
        
        if (eax_6 != 0)
            if ((*eax_6 & 1) != 0)
                *(*(arg1 + 0x40) + edi_3 + 8) = arg5
                return result
            
            if (eax_6 != 0)
                goto label_5c5e2b
        
        int32_t* eax_7 = sub_5bfce0(ecx_5)
        *(*(arg1 + 0x40) + edi_3 + 4) = eax_7
        
        if (eax_7 != 0)
        label_5c5e2b:
            *(*(*(arg1 + 0x40) + edi_3 + 4) + 0xc) = 0xfffffffe
            int32_t* eax_9 = *(*(arg1 + 0x40) + edi_3 + 4)
            *eax_9 |= 1
            *(*(arg1 + 0x40) + edi_3 + 8) = arg5
            return result
        
        zip_error_set(arg1 + 8, 0xe, eax_7)
    return 0xffffffff
}
