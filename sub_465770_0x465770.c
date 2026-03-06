// 函数名称: sub_465770
// 虚拟地址: 0x465770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_465770(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(edi - 1)
    int32_t esi_1 = (eax_1 - edx) s>> 1
    
    while (arg3 s< edi)
        int32_t* ebx_1 = arg2 + (esi_1 << 3)
        
        if (arg5(ebx_1, arg4) == 0)
            break
        
        *(arg2 + (edi << 3)) = *ebx_1
        *(arg2 + (edi << 3) + 4) = ebx_1[1]
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(esi_1 - 1)
        edi = esi_1
        esi_1 = (eax_7 - edx_2) s>> 1
    
    *(arg2 + (edi << 3)) = *arg4
    int32_t result = arg4[1]
    *(arg2 + (edi << 3) + 4) = result
    return result
}
