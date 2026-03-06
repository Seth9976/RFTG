// 函数名称: sub_5e4390
// 虚拟地址: 0x5e4390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e4390(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int16_t* ecx = *(ebx + 0x10)
    void* var_c = eax_2 + ecx
    int16_t* edx = ecx
    void* esi_1
    esi_1.w = *edx
    int32_t edi
    edi.w = edx[1]
    int32_t eax_3 = 0
    esi_1.w = rol.w(esi_1.w, 8)
    edi.w = rol.w(edi.w, 8)
    int16_t esi_2 = esi_1.w
    
    if (ecx u< var_c)
        int16_t edi_2 = edi.w
        
        do
            int32_t eax_4 = eax_3 + eax_2
            edx = &edx[2]
            
            if (eax_4 * 2 s< eax - 0x40)
                eax_3 = eax_4
            else
                int32_t eax_5
                eax_5.w = esi_2
                eax_5.w = rol.w(eax_5.w, 8)
                *ecx = eax_5.w
                eax_5.w = edi_2
                eax_5.w = rol.w(eax_5.w, 8)
                ecx[1] = eax_5.w
                ecx = &ecx[2]
                esi_2 = ((zx.d(rol.w(*edx, 8)) + zx.d(esi_2)) s>> 1).w
                edi_2 = ((zx.d(rol.w(edx[1], 8)) + zx.d(edi_2)) s>> 1).w
                eax_3 = eax_4 - (eax - 0x40)
        while (ecx u< var_c)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
