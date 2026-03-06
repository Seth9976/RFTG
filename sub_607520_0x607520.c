// 函数名称: sub_607520
// 虚拟地址: 0x607520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_607520(int32_t* arg1, int32_t* arg2, int16_t* arg3, int32_t* arg4, int16_t* arg5)
{
    // 第一条实际指令: int32_t* edi = arg4
    int32_t* edi = arg4
    int32_t ebx = 1
    int32_t var_c = 0
    
    if ((*edi & 2) != 0)
        arg1 = sub_5d6350(edi)
        var_c = 1
    
    int32_t var_10 = 0
    
    if ((*arg2 & 2) != 0)
        arg1 = sub_5d6350(arg2)
        var_10 = 1
    
    if (ebx != 0 && arg3 != 0 && *(arg3 + 8) s> 0 && *(arg3 + 0xc) s> 0)
        void* eax = arg2[0xd]
        *(eax + 0x10) = zx.d(arg3[2]) * arg2[4] + zx.d(*arg3) * zx.d(*(*(eax + 0x38) + 9)) + arg2[5]
        *(eax + 0x14) = *(arg3 + 8)
        void* edx_4 = *(eax + 0x38)
        *(eax + 0x18) = *(arg3 + 0xc)
        int32_t ecx_3 = arg2[4]
        *(eax + 0x1c) = ecx_3
        *(eax + 0x20) = ecx_3 - zx.d(*(edx_4 + 9)) * *(eax + 0x14)
        edi = arg4
        *(eax + 0x24) = zx.d(*(*(eax + 0x3c) + 9)) * zx.d(*arg5) + zx.d(arg5[2]) * edi[4] + edi[5]
        *(eax + 0x28) = *(arg5 + 8)
        void* edx_12 = *(eax + 0x3c)
        *(eax + 0x2c) = *(arg5 + 0xc)
        int32_t ecx_8 = edi[4]
        *(eax + 0x30) = ecx_8
        *(eax + 0x34) = ecx_8 - zx.d(*(edx_12 + 9)) * *(eax + 0x28)
        arg1 = (*(arg2[0xd] + 0xc))(eax + 0x10)
        ebx = 1
    
    if (var_c != 0)
        arg1 = sub_5d6380(edi)
    
    if (var_10 != 0)
        arg1 = sub_5d6380(arg2)
    
    return neg.d(sbb.d(arg1, arg1, ebx != 0)) - 1
}
