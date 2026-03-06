// 函数名称: sub_5e3b90
// 虚拟地址: 0x5e3b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e3b90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t edi = *(ebx + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(ebx + 8)))
    int32_t ecx = *(ebx + 0x10)
    void* edx = ecx + eax_1 - 0xc
    int16_t* ecx_1 = ecx + edi - 0xc
    int16_t edi_1 = ecx_1[5]
    int16_t var_8 = *(ecx + edi - 4)
    int16_t var_c = ecx_1[3]
    int16_t var_10 = ecx_1[2]
    int16_t var_14 = ecx_1[1]
    int32_t esi = 0
    int16_t var_18 = *ecx_1
    int32_t eax_7 = eax_1
    
    if (edx u>= ecx)
        do
            esi += edi - 0xc0
            *(edx + 8) = var_8
            *(edx + 6) = var_c
            *(edx + 4) = var_10
            *(edx + 2) = var_14
            *edx = var_18
            *(edx + 0xa) = edi_1
            edx -= 0xc
            
            if (esi * 2 s>= eax_7)
                int32_t eax_8 = sx.d(ecx_1[-1])
                ecx_1 -= 0xc
                edi_1 = ((eax_8 + sx.d(edi_1)) s>> 1).w
                var_8 = ((sx.d(ecx_1[4]) + sx.d(var_8)) s>> 1).w
                var_c = ((sx.d(ecx_1[3]) + sx.d(var_c)) s>> 1).w
                var_10 = ((sx.d(ecx_1[2]) + sx.d(var_10)) s>> 1).w
                var_14 = ((sx.d(ecx_1[1]) + sx.d(var_14)) s>> 1).w
                var_18 = ((sx.d(*ecx_1) + sx.d(var_18)) s>> 1).w
                eax_7 = eax_1
                esi -= eax_7
        while (edx u>= ecx)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = eax_7
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
