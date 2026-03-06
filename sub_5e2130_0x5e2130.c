// 函数名称: sub_5e2130
// 虚拟地址: 0x5e2130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e2130(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    char* ecx = *(esi + 0x10)
    char edx = ecx[1]
    char var_5 = ecx[2]
    char var_6 = ecx[3]
    char var_7 = ecx[4]
    char var_8 = ecx[5]
    int32_t edi = eax_2
    char var_9 = ecx[6]
    void* i = &ecx[edi]
    void* eax_3
    eax_3.b = *ecx
    int32_t var_18_1 = edi
    int32_t var_10 = 0
    char var_a = ecx[7]
    
    if (ecx u< i)
        void* esi_1 = &ecx[2]
        void* ecx_1 = &ecx[2]
        
        do
            int32_t ebx_7 = var_10 + edi
            var_10 = ebx_7
            esi_1 += 8
            
            if (ebx_7 * 2 s>= eax - 0x80)
                *ecx_1 = var_5
                *(ecx_1 + 1) = var_6
                *(ecx_1 + 2) = var_7
                *(ecx_1 + 3) = var_8
                *(ecx_1 - 1) = edx
                *(ecx_1 + 4) = var_9
                *(ecx_1 + 5) = var_a
                *(ecx_1 - 2) = eax_3.b
                var_5 = ((zx.d(*esi_1) + zx.d(var_5)) s>> 1).b
                var_6 = ((zx.d(*(esi_1 + 1)) + zx.d(var_6)) s>> 1).b
                var_7 = ((zx.d(*(esi_1 + 2)) + zx.d(var_7)) s>> 1).b
                var_8 = ((zx.d(*(esi_1 + 3)) + zx.d(var_8)) s>> 1).b
                var_9 = ((zx.d(*(esi_1 + 4)) + zx.d(var_9)) s>> 1).b
                ecx_1 += 8
                eax_3 = (zx.d(eax_3.b) + zx.d(*(esi_1 - 2))) s>> 1
                var_10 -= eax - 0x80
                var_a = ((zx.d(*(esi_1 + 5)) + zx.d(var_a)) s>> 1).b
                edx = ((zx.d(*(esi_1 - 1)) + zx.d(edx)) s>> 1).b
            
            edi = var_18_1
        while (ecx_1 - 2 u< i)
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
