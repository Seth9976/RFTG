// 函数名称: sub_5e5370
// 虚拟地址: 0x5e5370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e5370(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int16_t* ecx = *(ebx + 0x10)
    void* i = eax_2 + ecx
    int16_t edi = rol.w(ecx[1], 8)
    int16_t esi = rol.w(*ecx, 8)
    void* edx_1 = &ecx[2]
    int16_t var_10 = rol.w(ecx[2], 8)
    int32_t var_8 = 0
    int16_t var_c = rol.w(ecx[3], 8)
    
    if (ecx u< i)
        void* ecx_1 = &ecx[2]
        
        do
            int32_t eax_9 = var_8 + eax_2
            edx_1 += 8
            var_8 = eax_9
            
            if (eax_9 * 2 s>= eax - 0x80)
                int32_t eax_10
                eax_10.w = esi
                eax_10.w = rol.w(eax_10.w, 8)
                *(ecx_1 - 4) = eax_10.w
                eax_10.w = edi
                eax_10.w = rol.w(eax_10.w, 8)
                *(ecx_1 - 2) = eax_10.w
                ebx.w = var_10
                ebx.w = rol.w(ebx.w, 8)
                *ecx_1 = ebx.w
                *(ecx_1 + 2) = rol.w(var_c, 8)
                ecx_1 += 8
                esi = ((sx.d(rol.w(*(edx_1 - 4), 8)) + sx.d(esi)) s>> 1).w
                edi = ((sx.d(rol.w(*(edx_1 - 2), 8)) + sx.d(edi)) s>> 1).w
                var_10 = ((sx.d(rol.w(*edx_1, 8)) + sx.d(var_10)) s>> 1).w
                var_c = ((sx.d(rol.w(*(edx_1 + 2), 8)) + sx.d(var_c)) s>> 1).w
                var_8 -= eax - 0x80
        while (ecx_1 - 4 u< i)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
