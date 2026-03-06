// 函数名称: sub_5c4280
// 虚拟地址: 0x5c4280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c4280(void* arg1 @ esi)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    if (*(arg1 + 0x30) != 0)
        int32_t ebx_1 = 0
        int32_t edi_1 = 0
        int32_t temp0_1 = *(arg1 + 0x14)
        
        if (temp0_1 u>= 0 && (temp0_1 u> 0 || *(arg1 + 0x10) u> 0))
            while (true)
                __free_base(*(*(arg1 + 8) + (edi_1 << 2)))
                int32_t temp1_1 = edi_1
                edi_1 += 1
                ebx_1 = adc.d(ebx_1, 0, temp1_1 u>= 0xffffffff)
                int32_t temp2_1 = *(arg1 + 0x14)
                
                if (ebx_1 u>= temp2_1)
                    if (ebx_1 u> temp2_1)
                        break
                    
                    if (edi_1 u>= *(arg1 + 0x10))
                        break
    
    __free_base(*(arg1 + 8))
    __free_base(arg1)
}
