// 函数名称: sub_60cf00
// 虚拟地址: 0x60cf00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60cf00(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = arg1[0x11]
    int32_t* eax = arg1[0x11]
    int32_t edx_1 = arg1[1]
    
    if (sub_60cdf0(arg2[1], edx_1, *arg2, *eax, edx_1, 0, arg2[2], arg2[3], arg3, arg4) s>= 0)
        if (eax[2] == 0)
            return 0
        
        int32_t ecx_4 = arg2[3]
        int32_t edi_1 = arg3 + ecx_4 * arg4
        int32_t* edx_5
        
        if (arg1[1] != 0x32315659)
            edx_5 = eax[3]
        else
            edx_5 = eax[4]
        
        int32_t eax_6
        int32_t edx_6
        edx_6:eax_6 = sx.q(arg4)
        int32_t eax_9
        int32_t edx_7
        edx_7:eax_9 = sx.q(ecx_4)
        int32_t ebx_2 = (eax_6 - edx_6) s>> 1
        int32_t eax_13
        int32_t edx_8
        edx_8:eax_13 = sx.q(arg2[2])
        int32_t eax_17
        int32_t edx_9
        edx_9:eax_17 = sx.q(arg2[1])
        int32_t eax_21
        int32_t edx_10
        edx_10:eax_21 = sx.q(*arg2)
        
        if (sub_60cdf0((eax_17 - edx_9) s>> 1, edx_5, (eax_21 - edx_10) s>> 1, edx_5, arg1[1], 0, 
                (eax_13 - edx_8) s>> 1, (eax_9 - edx_7) s>> 1, edi_1, ebx_2) s>= 0)
            int32_t ecx_7 = arg2[3]
            int32_t eax_29
            int32_t edx_12
            edx_12:eax_29 = sx.q(ecx_7 * arg4)
            int32_t* eax_33 = arg1[1]
            int32_t* eax_34
            
            if (eax_33 != 0x32315659)
                eax_34 = eax[4]
            else
                eax_34 = eax[3]
            
            int32_t eax_36
            int32_t edx_15
            edx_15:eax_36 = sx.q(ecx_7)
            int32_t eax_40
            int32_t edx_16
            edx_16:eax_40 = sx.q(arg2[2])
            int32_t eax_44
            int32_t edx_17
            edx_17:eax_44 = sx.q(arg2[1])
            int32_t eax_47
            int32_t edx_18
            edx_18:eax_47 = sx.q(*arg2)
            int32_t eax_51 = sub_60cdf0((eax_44 - edx_17) s>> 1, eax_33, (eax_47 - edx_18) s>> 1, 
                eax_34, eax_33, 0, (eax_40 - edx_16) s>> 1, (eax_36 - edx_15) s>> 1, 
                edi_1 + ((eax_29 + (edx_12 & 3)) s>> 2), ebx_2)
            
            if (eax_51 s>= 0)
                return 0
    
    return 0xffffffff
}
