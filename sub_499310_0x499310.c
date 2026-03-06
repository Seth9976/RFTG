// 函数名称: sub_499310
// 虚拟地址: 0x499310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_499310(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t ebx = 0
    uint32_t result = 1
    
    if (edi s> arg2)
        return 0
    
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(arg2)
    
    if (edi s> (eax_2 - edx_1) s>> 1)
        edi = arg2 - edi
    
    int32_t esi_2 = 1
    
    if (edi s>= 1)
        int32_t eax_6 = arg2 - edi
        arg2 = eax_6
        
        while (true)
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(eax_6 + esi_2)
            int32_t eax_9
            uint32_t edx_3
            eax_9, edx_3 = __allmul(eax_8, edx_2, result, ebx)
            int32_t eax_11
            uint32_t edx_4
            edx_4:eax_11 = sx.q(esi_2)
            uint32_t result_1
            int32_t edx_5
            result_1, edx_5 = __aulldiv(eax_9, edx_3, eax_11, edx_4)
            esi_2 += 1
            result = result_1
            ebx = edx_5
            
            if (esi_2 s> edi)
                break
            
            eax_6 = arg2
    
    return result
}
