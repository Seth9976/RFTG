// 函数名称: sub_679340
// 虚拟地址: 0x679340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_679340(int32_t* arg1)
{
    // 第一条实际指令: switch (arg1[5] - 0xc8)
    switch (arg1[5] - 0xc8)
        case 0
            (*(arg1[0x6d] + 4))(arg1)
            (*(arg1[6] + 8))(arg1)
            arg1[5] = 0xc9
        label_67938f:
            int32_t result = (*arg1[0x6d])(arg1)
            
            if (result != 1)
                return result
            
            sub_679170(arg1)
            arg1[5] = 0xca
            return result
        case 1
            goto label_67938f
        case 2
            return 1
        case 3, 4, 5, 6, 7, 8, 0xa
            return (*arg1[0x6d])(arg1)
        default
            *(*arg1 + 0x14) = 0x14
            *(*arg1 + 0x18) = arg1[5]
            (**arg1)(arg1)
            return 0
}
