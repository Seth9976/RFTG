// 函数名称: sub_5af828
// 虚拟地址: 0x5af828
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5af828(int32_t* arg1)
{
    // 第一条实际指令: if (sub_5b8cf1(__fileno(arg1)) != 0)
    if (sub_5b8cf1(__fileno(arg1)) != 0)
        int32_t eax_2
        
        if (arg1 == &data_8b80b0)
            eax_2 = 0
        label_5af862:
            data_bec5c0 += 1
            
            if ((arg1[3] & 0x10c) == 0)
                int32_t edi
                int32_t var_10_1 = edi
                int32_t eax_3
                
                if (*((eax_2 << 2) + &data_bed0fc) == 0)
                    eax_3 = sub_5abd7c(0x1000)
                    *((eax_2 << 2) + &data_bed0fc) = eax_3
                
                if (*((eax_2 << 2) + &data_bed0fc) != 0 || eax_3 != 0)
                    int32_t edi_2 = *((eax_2 << 2) + &data_bed0fc)
                    arg1[2] = edi_2
                    *arg1 = edi_2
                    arg1[6] = 0x1000
                    arg1[1] = 0x1000
                else
                    arg1[2] = &arg1[5]
                    *arg1 = &arg1[5]
                    arg1[6] = 2
                    arg1[1] = 2
                
                arg1[3] |= 0x1102
                return 1
        else if (arg1 == &data_8b80d0)
            eax_2 = 1
            goto label_5af862
    
    return 0
}
