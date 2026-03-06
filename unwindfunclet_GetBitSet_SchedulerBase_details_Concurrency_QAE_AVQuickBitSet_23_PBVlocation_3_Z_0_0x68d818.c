// 函数名称: __unwindfunclet$?GetBitSet@SchedulerBase@details@Concurrency@@QAE?AVQuickBitSet@23@PBVlocation@3@@Z$0
// 虚拟地址: 0x68d818
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unwindfunclet$?GetBitSet@SchedulerBase@details@Concurrency@@QAE?AVQuickBitSet@23@PBVlocation@3@@Z$0(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 1
    int32_t result = *(arg1 - 0x10) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffe
    return sub_4c43d0(*(arg1 + 8)) __tailcall
}
