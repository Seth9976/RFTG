// 函数名称: sub_5d5bb0
// 虚拟地址: 0x5d5bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5bb0(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax = sub_5d0ba0()
    int32_t* eax = sub_5d0ba0()
    int32_t ecx = data_bf7f80
    int32_t eax_1 = data_bf7f7c
    
    if (arg1 != data_bf7f98)
        if (data_bf7f70 == 0)
            sub_5cd050(4)
            return 0xffffffff
        
        if (arg1 != 0 && eax != 0)
            sub_5d5830(eax)
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(eax[7])
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(eax[6])
            sub_5d5b60(eax, (eax_7 - edx_2) s>> 1, (eax_3 - edx_1) s>> 1)
        
        if (data_bf7f70(arg1) s< 0)
            return 0xffffffff
        
        data_bf7f98 = arg1
        
        if (arg1 == 0)
            int32_t* eax_13 = data_bf7f78
            
            if (eax_13 != 0)
                sub_5d5b60(eax_13, data_bf7f9c, data_bf7fa0)
        else
            data_bf7f9c = eax_1
            data_bf7fa0 = ecx
        
        sub_5c7810(0x400)
        sub_5d56c0(0)
    
    return 0
}
