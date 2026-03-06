// 函数名称: sub_465850
// 虚拟地址: 0x465850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_465850(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ebx - 1)
    int32_t edi_1 = (eax_1 - edx) s>> 1
    
    while (arg3 s< ebx)
        int32_t* esi_1 = arg2 + edi_1 * 0x14
        
        if (arg5(esi_1, arg4) == 0)
            break
        
        int32_t* eax_6 = arg2 + ebx * 0x14
        *eax_6 = *esi_1
        eax_6[1] = esi_1[1]
        eax_6[2] = esi_1[2]
        eax_6[3] = esi_1[3]
        eax_6[4] = esi_1[4]
        int32_t eax_8
        int32_t edx_5
        edx_5:eax_8 = sx.q(edi_1 - 1)
        ebx = edi_1
        edi_1 = (eax_8 - edx_5) s>> 1
    
    int32_t* result = arg2 + ebx * 0x14
    *result = *arg4
    result[1] = arg4[1]
    result[2] = arg4[2]
    result[3] = arg4[3]
    result[4] = arg4[4]
    return result
}
