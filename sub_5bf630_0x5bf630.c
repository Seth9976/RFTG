// 函数名称: sub_5bf630
// 虚拟地址: 0x5bf630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5bf630(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t ebx_1 = 0
    int32_t edi_1 = 0
    int32_t temp0_1 = arg1[3]
    
    if (temp0_1 u>= 0 && (temp0_1 u> 0 || arg1[2] u> 0))
        while (true)
            sub_5c38a0((edi_1 << 4) + *arg1)
            int32_t temp1_1 = edi_1
            edi_1 += 1
            ebx_1 = adc.d(ebx_1, 0, temp1_1 u>= 0xffffffff)
            int32_t temp2_1 = arg1[3]
            
            if (ebx_1 u>= temp2_1)
                if (ebx_1 u> temp2_1)
                    break
                
                if (edi_1 u>= arg1[2])
                    break
    
    __free_base(*arg1)
    sub_5bf1f0(arg1[0xa])
    __free_base(arg1)
}
