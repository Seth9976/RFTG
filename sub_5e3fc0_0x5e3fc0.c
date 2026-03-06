// 函数名称: sub_5e3fc0
// 虚拟地址: 0x5e3fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e3fc0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int16_t* ecx = *(ebx + 0x10)
    void* i = eax_2 + ecx
    int16_t esi = *ecx
    int16_t edi = ecx[1]
    void* edx = &ecx[2]
    int16_t var_20 = ecx[2]
    int16_t var_c = ecx[3]
    int16_t var_10 = ecx[4]
    int16_t var_14 = ecx[5]
    int16_t var_18 = ecx[6]
    int32_t var_8 = 0
    int16_t var_1c = ecx[7]
    
    if (ecx u< i)
        void* ecx_1 = &ecx[2]
        
        do
            int32_t eax_10 = var_8 + eax_2
            edx += 0x10
            var_8 = eax_10
            
            if (eax_10 * 2 s>= eax - 0x100)
                *(ecx_1 + 2) = var_c
                *(ecx_1 + 4) = var_10
                *(ecx_1 + 6) = var_14
                *ecx_1 = var_20
                *(ecx_1 + 8) = var_18
                *(ecx_1 + 0xa) = var_1c
                *(ecx_1 - 4) = esi
                *(ecx_1 - 2) = edi
                esi = ((sx.d(*(edx - 4)) + sx.d(esi)) s>> 1).w
                edi = ((sx.d(*(edx - 2)) + sx.d(edi)) s>> 1).w
                var_20 = ((sx.d(*edx) + sx.d(var_20)) s>> 1).w
                var_c = ((sx.d(*(edx + 2)) + sx.d(var_c)) s>> 1).w
                var_10 = ((sx.d(*(edx + 4)) + sx.d(var_10)) s>> 1).w
                var_14 = ((sx.d(*(edx + 6)) + sx.d(var_14)) s>> 1).w
                var_18 = ((sx.d(*(edx + 8)) + sx.d(var_18)) s>> 1).w
                var_1c = ((sx.d(*(edx + 0xa)) + sx.d(var_1c)) s>> 1).w
                ecx_1 += 0x10
                var_8 -= eax - 0x100
        while (ecx_1 - 4 u< i)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
