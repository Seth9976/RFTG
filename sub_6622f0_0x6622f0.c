// 函数名称: sub_6622f0
// 虚拟地址: 0x6622f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6622f0(void* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    if ((*(arg2 + 0xb8) & arg3 & 0x4000) != 0)
        if (arg4 == 0xffffffff)
            int32_t i = 0
            
            if (*(arg2 + 0x30) s> 0)
                do
                    sub_6622f0(arg1, arg2, 0x4000, i)
                    i += 1
                while (i s< *(arg2 + 0x30))
            
            sub_666530(arg1, *(arg2 + 0x38))
            *(arg2 + 0x38) = 0
            *(arg2 + 0x30) = 0
        else
            int32_t eax_3 = *(arg2 + 0x38)
            
            if (eax_3 != 0)
                int32_t ebx_4 = arg4 * 0x1c
                int32_t eax_4 = *(ebx_4 + eax_3 + 4)
                
                if (eax_4 != 0)
                    sub_666530(arg1, eax_4)
                    *(ebx_4 + *(arg2 + 0x38) + 4) = 0
    
    if ((*(arg2 + 0xb8) & arg3 & 0x2000) != 0)
        sub_666530(arg1, *(arg2 + 0x4c))
        *(arg2 + 8) &= 0xffffffef
        *(arg2 + 0x4c) = 0
    
    if ((*(arg2 + 0xb8) & arg3 & 0x100) != 0)
        sub_666530(arg1, *(arg2 + 0xe0))
        sub_666530(arg1, *(arg2 + 0xe4))
        *(arg2 + 8) &= 0xffffbfff
        *(arg2 + 0xe0) = 0
        *(arg2 + 0xe4) = 0
    
    if (((*(arg2 + 0xb8)).b & arg3.b) s< 0)
        sub_666530(arg1, *(arg2 + 0xa0))
        sub_666530(arg1, *(arg2 + 0xac))
        int32_t i_1 = 0
        *(arg2 + 0xa0) = 0
        *(arg2 + 0xac) = 0
        
        if (*(arg2 + 0xb0) != 0)
            if (*(arg2 + 0xb5) u> 0)
                do
                    sub_666530(arg1, *(*(arg2 + 0xb0) + (i_1 << 2)))
                    *(*(arg2 + 0xb0) + (i_1 << 2)) = 0
                    i_1 += 1
                while (i_1 s< zx.d(*(arg2 + 0xb5)))
            
            sub_666530(arg1, *(arg2 + 0xb0))
            *(arg2 + 0xb0) = 0
        
        *(arg2 + 8) &= 0xfffffbff
    
    if (((*(arg2 + 0xb8)).b & arg3.b & 0x10) != 0)
        sub_666530(arg1, *(arg2 + 0xc4))
        sub_666530(arg1, *(arg2 + 0xc8))
        *(arg2 + 8) &= 0xffffefff
        *(arg2 + 0xc4) = 0
        *(arg2 + 0xc8) = 0
    
    if (((*(arg2 + 0xb8)).b & arg3.b & 0x20) != 0)
        if (arg4 == 0xffffffff)
            int32_t eax_15 = *(arg2 + 0xd8)
            
            if (eax_15 != 0)
                int32_t i_2 = 0
                
                if (eax_15 s> 0)
                    do
                        sub_6622f0(arg1, arg2, 0x20, i_2)
                        i_2 += 1
                    while (i_2 s< *(arg2 + 0xd8))
                
                sub_666530(arg1, *(arg2 + 0xd4))
                *(arg2 + 0xd4) = 0
                *(arg2 + 0xd8) = 0
            
            *(arg2 + 8) &= 0xffffdfff
        else
            int32_t eax_12 = *(arg2 + 0xd4)
            
            if (eax_12 != 0)
                int32_t ebx_6 = arg4 * 2
                sub_666530(arg1, *(eax_12 + (ebx_6 << 3)))
                sub_666530(arg1, *(*(arg2 + 0xd4) + (ebx_6 << 3) + 8))
                *(*(arg2 + 0xd4) + (ebx_6 << 3)) = 0
                *(*(arg2 + 0xd4) + (ebx_6 << 3) + 8) = 0
    
    int32_t eax_16 = *(arg1 + 0x298)
    
    if (eax_16 != 0)
        sub_666530(arg1, eax_16)
        *(arg1 + 0x298) = 0
    
    if ((*(arg2 + 0xb8) & arg3 & 0x200) != 0)
        if (arg4 == 0xffffffff)
            int32_t eax_19 = *(arg2 + 0xc0)
            
            if (eax_19 != 0)
                int32_t i_3 = 0
                
                if (eax_19 s> 0)
                    do
                        sub_6622f0(arg1, arg2, 0x200, i_3)
                        i_3 += 1
                    while (i_3 s< *(arg2 + 0xc0))
                
                sub_666530(arg1, *(arg2 + 0xbc))
                *(arg2 + 0xbc) = 0
                *(arg2 + 0xc0) = 0
        else
            int32_t eax_17 = *(arg2 + 0xbc)
            
            if (eax_17 != 0)
                int32_t ebx_10 = arg4 * 0x14
                sub_666530(arg1, *(ebx_10 + eax_17 + 8))
                *(ebx_10 + *(arg2 + 0xbc) + 8) = 0
    
    if (((*(arg2 + 0xb8)).b & arg3.b & 8) != 0)
        sub_666530(arg1, *(arg2 + 0x7c))
        *(arg2 + 8) &= 0xffffffbf
        *(arg2 + 0x7c) = 0
    
    if ((*(arg2 + 0xb8) & arg3 & 0x1000) != 0)
        sub_666530(arg1, *(arg2 + 0x10))
        *(arg2 + 8) &= 0xfffffff7
        *(arg2 + 0x10) = 0
        *(arg2 + 0x14) = 0
    
    int32_t eax_23 = arg3
    
    if (((*(arg2 + 0xb8)).b & eax_23.b & 0x40) != 0)
        if (*(arg2 + 0xe8) != 0)
            int32_t i_4 = 0
            
            if (*(arg2 + 4) s> 0)
                do
                    sub_666530(arg1, *(*(arg2 + 0xe8) + (i_4 << 2)))
                    *(*(arg2 + 0xe8) + (i_4 << 2)) = 0
                    i_4 += 1
                while (i_4 s< *(arg2 + 4))
            
            sub_666530(arg1, *(arg2 + 0xe8))
            *(arg2 + 0xe8) = 0
        
        *(arg2 + 8) &= 0xffff7fff
        eax_23 = arg3
    
    if (arg4 != 0xffffffff)
        eax_23 &= 0xffffbddf
    
    *(arg2 + 0xb8) &= not.d(eax_23)
}
