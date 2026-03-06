// 函数名称: __unwindfunclet$?do_transform@?$collate@_W@std@@MBE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PB_W0@Z$0
// 虚拟地址: 0x68e8e8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unwindfunclet$?do_transform@?$collate@_W@std@@MBE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PB_W0@Z$0(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 1
    int32_t result = *(arg1 - 0x10) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffe
    return sub_5224b0(*(arg1 + 8)) __tailcall
}
