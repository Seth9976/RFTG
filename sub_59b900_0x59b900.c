// 函数名称: sub_59b900
// 虚拟地址: 0x59b900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_59b900(int32_t arg1, int32_t arg2, int32_t arg3 @ esi) __pure
{
    // 第一条实际指令: int32_t result_1
    int32_t result_1
    
    if (arg1 s>= 0)
        result_1 = arg2 s>> arg1.b
    else
        result_1 = arg2 << (neg.d(arg1)).b
    
    int32_t result = result_1
    int32_t i = arg3
    
    if (arg3 s< 8)
        do
            int32_t edi_2 = result_1 s>> i.b
            i += arg3
            result += edi_2
        while (i s< 8)
    
    return result
}
