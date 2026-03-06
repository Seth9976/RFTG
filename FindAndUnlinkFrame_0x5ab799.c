// 函数名称: __FindAndUnlinkFrame
// 虚拟地址: 0x5ab799
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*__FindAndUnlinkFrame(void* arg1)
{
    // 第一条实际指令: uint32_t* result
    uint32_t* result
    
    if (arg1 != __getptd()[0x26])
        result = __getptd()[0x26]
        
        while (true)
            if (result[1] == 0)
                noreturn _inconsistency() __tailcall
            
            uint32_t* result_1 = result[1]
            
            if (arg1 == result_1)
                break
            
            result = result_1
        
        result[1] = *(arg1 + 4)
    else
        result = __getptd()
        result[0x26] = *(arg1 + 4)
    
    return result
}
