// 函数名称: sub_40a050
// 虚拟地址: 0x40a050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_40a050()
{
    // 第一条实际指令: int32_t edx = data_315f8dc
    int32_t edx = data_315f8dc
    int32_t ecx = data_307bdcc
    int32_t* esi = data_27e7fd4
    uint32_t result
    
    if (edx == 0)
        result = 0
    else
        uint32_t eax_1 = zx.d(edx.w)
        
        if (eax_1 u>= esi[1])
            result = 0
        else
            int32_t* eax_4 = eax_1 * 0x60 + *esi
            
            if (eax_4[0x17] == edx)
                result = *eax_4
            else
                result = 0
    
    if (result != ecx)
        if (edx != 0)
            result = zx.d(edx.w)
            
            if (result u< esi[1])
                result = result * 0x60 + *esi
                
                if (*(result + 0x5c) == edx)
                    long double x87_r7_1 = fconvert.t(*(data_27e7fcc + 0x4c))
                    *(result + 0x24) = 1
                    *(result + 0x28) = fconvert.s(x87_r7_1)
                    *(result + 0x2c) = fconvert.s(fconvert.t(0.300000012f))
                    *(result + 0x30) = fconvert.s(fconvert.t(*(result + 0x38)))
                    *(result + 0x34) = fconvert.s(float.t(0))
        
        if (ecx != 0)
            int32_t var_10_1 = ecx
            result = sub_4d68a0(fconvert.s(fconvert.t(0.200000003f)))
            esi = data_27e7fd4
            data_315f8dc = result
    
    int32_t edx_2 = data_315f8e0
    
    if (edx_2 != 0)
        int32_t edi_1 = esi[1]
        result = zx.d(edx_2.w)
        
        if (result u< edi_1)
            int32_t esi_1 = *esi
            uint32_t ecx_2 = result * 0x60
            
            if (*(ecx_2 + esi_1 + 0x5c) == edx_2 && *(ecx_2 + esi_1) != 0 && result u< edi_1)
                result = result * 0x60 + esi_1
                
                if (*(result + 0x5c) == edx_2)
                    long double x87_r7_6 = fconvert.t(*(data_27e7fcc + 0x4c))
                    *(result + 0x24) = 1
                    *(result + 0x28) = fconvert.s(x87_r7_6)
                    *(result + 0x2c) = fconvert.s(fconvert.t(0.300000012f))
                    *(result + 0x30) = fconvert.s(fconvert.t(*(result + 0x38)))
                    *(result + 0x34) = fconvert.s(float.t(0))
    
    return result
}
