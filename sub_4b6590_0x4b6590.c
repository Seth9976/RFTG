// 函数名称: sub_4b6590
// 虚拟地址: 0x4b6590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4b6590()
{
    // 第一条实际指令: char eax = sub_402ec0()
    char eax = sub_402ec0()
    void* esi = data_27e7a48
    
    if (eax != 0)
        *(esi + 8) = 1
    
    long double x87_r7_2 = float.t(0)
    fconvert.t(fconvert.s(fconvert.t(data_8c4d34) * fconvert.t(1000.0))) - x87_r7_2
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t eax_1 = sub_685f40(x87_r7_3)
    *(esi + 0xc) += eax_1
    *(esi + 0x10) += 1
    int32_t* edi = data_27e7a4c
    int32_t esi_1 = *edi
    uint32_t result
    int32_t edx
    edx:result = sx.q(*(esi + 0xc))
    int32_t ecx_1 = adc.d(edi[1], 0, esi_1 u>= 0xfffffc18)
    
    if (ecx_1 s<= edx && (ecx_1 s< edx || esi_1 + 0x3e8 u<= result))
        *edi = result
        edi[1] = edx
    
    int32_t* ecx_2 = edi[0x74]
    
    if (*ecx_2 != 2)
        return result
    
    return sub_4d23d0(ecx_2)
}
