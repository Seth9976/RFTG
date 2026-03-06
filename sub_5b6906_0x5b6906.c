// 函数名称: sub_5b6906
// 虚拟地址: 0x5b6906
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*sub_5b6906(void* arg1 @ ebp, int32_t* arg2 @ esi, void* arg3 @ edi)
{
    // 第一条实际指令: *(arg3 - 4) = *(arg1 - 0x24)
    *(arg3 - 4) = *(arg1 - 0x24)
    __FindAndUnlinkFrame(*(arg1 - 0x28))
    uint32_t* eax = __getptd()
    eax[0x22] = *(arg1 - 0x2c)
    uint32_t* result = __getptd()
    result[0x23] = *(arg1 - 0x30)
    
    if (*arg2 == 0xe06d7363 && arg2[4] == 3)
        result = arg2[5]
        
        if ((result == 0x19930520 || result == 0x19930521 || result == 0x19930522)
                && *(arg1 - 0x34) == 0 && *(arg1 - 0x1c) != 0)
            result = sub_5ab772(arg2[6])
            
            if (result != 0)
                int32_t var_4_2 = *(arg1 + 0x10)
                result = sub_5b66a3(arg2)
    
    return result
}
