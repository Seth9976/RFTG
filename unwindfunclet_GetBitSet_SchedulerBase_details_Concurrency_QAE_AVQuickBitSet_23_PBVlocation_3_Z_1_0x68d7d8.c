// 函数名称: __unwindfunclet$?GetBitSet@SchedulerBase@details@Concurrency@@QAE?AVQuickBitSet@23@PBVlocation@3@@Z$1
// 虚拟地址: 0x68d7d8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unwindfunclet$?GetBitSet@SchedulerBase@details@Concurrency@@QAE?AVQuickBitSet@23@PBVlocation@3@@Z$1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x18) & 1
    int32_t result = *(arg1 - 0x18) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x18) &= 0xfffffffe
    return sub_4c43d0(*(arg1 + 8)) __tailcall
}
