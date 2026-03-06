// 函数名称: sub_522420
// 虚拟地址: 0x522420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_522420(void* arg1)
{
    // 第一条实际指令: int32_t i = sx.d(**(arg1 + 4)) - 9
    for (int32_t i = sx.d(**(arg1 + 4)) - 9; i u<= 0x17; i = sx.d(**(arg1 + 4)) - 9)
        int32_t ecx_3
        bool cond:0_1
        
        switch (jump_table_522484[zx.d(lookup_table_522494[i])])
            case 0x52244e
                *(arg1 + 4) += 1
            case 0x522453
                ecx_3 = *(arg1 + 4) + 1
                cond:0_1 = *ecx_3 != 0xa
            label_522463:
                
                if (not(cond:0_1))
                    *(arg1 + 4) = ecx_3
                
                *(arg1 + 4) += 1
                int32_t ecx_5 = *(arg1 + 4)
                *(arg1 + 0xc) += 1
                *(arg1 + 8) = ecx_5
            case 0x52245c
                ecx_3 = *(arg1 + 4) + 1
                cond:0_1 = *ecx_3 != 0xd
                goto label_522463
            case 0x522482
                break
}
