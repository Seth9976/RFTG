// 函数名称: sub_60d050
// 虚拟地址: 0x60d050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d050(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t* ebx = *(arg1 + 0x44)
    int32_t* ebx = *(arg1 + 0x44)
    int32_t* edx_1 = *ebx
    
    if (sub_60cdf0(arg2[1], edx_1, *arg2, edx_1, *(arg1 + 4), 0, arg2[2], arg2[3], arg3, arg4) s>= 0)
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(arg2[3])
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = sx.q(arg2[2])
        int32_t eax_15
        int32_t edx_4
        edx_4:eax_15 = sx.q(arg2[1])
        int32_t eax_19
        int32_t edx_5
        edx_5:eax_19 = sx.q(*arg2)
        int32_t edx_6 = *(arg1 + 4)
        
        if (sub_60cdf0((eax_15 - edx_4) s>> 1, edx_6, (eax_19 - edx_5) s>> 1, ebx[3], edx_6, 0, 
                (eax_11 - edx_3) s>> 1, (eax_7 - edx_2) s>> 1, arg5, arg6) s>= 0)
            int32_t eax_25
            int32_t edx_8
            edx_8:eax_25 = sx.q(arg2[3])
            int32_t eax_29
            int32_t edx_9
            edx_9:eax_29 = sx.q(arg2[2])
            int32_t eax_33
            int32_t edx_10
            edx_10:eax_33 = sx.q(arg2[1])
            int32_t eax_37
            int32_t edx_11
            edx_11:eax_37 = sx.q(*arg2)
            int32_t* edx_12 = ebx[4]
            int32_t ecx_9
            ecx_9.b = sub_60cdf0((eax_33 - edx_10) s>> 1, edx_12, (eax_37 - edx_11) s>> 1, edx_12, 
                *(arg1 + 4), 0, (eax_29 - edx_9) s>> 1, (eax_25 - edx_8) s>> 1, arg7, arg8) s>= 0
            return ecx_9 - 1
    
    return 0xffffffff
}
