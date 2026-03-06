// 函数名称: sub_53a0a0
// 虚拟地址: 0x53a0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53a0a0(int32_t arg1 @ edi, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    *arg2 = 0
    arg2[1] = 0
    int32_t* eax_1
    int32_t edx
    eax_1, edx = sub_537110()
    
    if (eax_1 != 0)
        if (eax_1[1] s> 0)
            do
                int32_t var_28_1 = 0
                int32_t eax_3
                int32_t edx_1
                eax_3, edx_1 = sub_537540(i, edx.b)
                int32_t eax_5
                int32_t edx_2
                edx_2:eax_5 = sx.q(eax_3 - arg1)
                
                if ((eax_5 ^ edx_2) - edx_2 s< 5)
                    int32_t eax_10
                    edx_2:eax_10 = sx.q(edx_1 - arg3)
                    
                    if ((eax_10 ^ edx_2) - edx_2 s< 5)
                        *arg2 = 1
                        arg2[1] = i
                        return arg2
                
                int32_t var_28_2 = 1
                int32_t eax_14
                int32_t edx_3
                eax_14, edx_3 = sub_537540(i, edx_2.b)
                int32_t eax_16
                edx:eax_16 = sx.q(eax_14 - arg1)
                
                if ((eax_16 ^ edx) - edx s< 5)
                    int32_t eax_22
                    edx:eax_22 = sx.q(edx_3 - arg3 - 5)
                    
                    if ((eax_22 ^ edx) - edx s< 0xa)
                        arg2[1] = i
                        *arg2 = 2
                        return arg2
                
                i += 1
            while (i s< eax_1[1])
        
        void* var_1c
        GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_1c)
        ScreenToClient(data_3078830, &var_1c)
        POINT point
        ScreenToClient(data_3078830, &point)
        eax_1 = var_1c + 0x16
        
        if (arg1 s>= eax_1 && arg1 s<= point.x - 8)
            eax_1 = arg3
            int32_t var_18
            
            if (eax_1 s>= var_18 + 0xa && eax_1 s<= point.y - 0x14)
                eax_1 = arg2
                *eax_1 = 3
    
    return eax_1
}
