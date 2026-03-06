// 函数名称: sub_52e200
// 虚拟地址: 0x52e200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_52e200(int32_t* arg1)
{
    // 第一条实际指令: if (data_30d74ec != 0)
    if (data_30d74ec != 0)
        float var_10
        sub_4c6230(&var_10)
        int32_t edi_2 = data_30d94f0
        float var_18 = var_10
        int32_t var_c
        int32_t var_14_1 = var_c
        
        if (edi_2 - 1 s>= 0)
            int32_t edi_4 = edi_2 - 1
            int32_t temp1_1
            
            do
                void* esi_1 = *((edi_4 << 3) + &data_30d74f0)
                
                if (*(esi_1 + 0x1510) == 0 && *(esi_1 + 0x1511) == 0
                        && sub_4057a0(esi_1 + 8, &var_18).b != 0)
                    *arg1 = *(esi_1 + 0x19dc)
                    int32_t* eax_1
                    eax_1.b = 1
                    return 
                
                temp1_1 = edi_4
                edi_4 -= 1
            while (temp1_1 - 1 s>= 0)
    
    float eax
    eax.b = 0
}
