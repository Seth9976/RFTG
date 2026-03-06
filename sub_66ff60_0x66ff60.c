// 函数名称: sub_66ff60
// 虚拟地址: 0x66ff60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66ff60(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg2
    int32_t result = arg2
    arg2.b = (result u>> 0x18).b
    arg2:1.b = (result u>> 0x10).b
    arg2:2.b = (result u>> 8).b
    arg2:3.b = result.b
    
    if (arg1 == 0)
        return result
    
    sub_66f010(arg1, 4)
    sub_666640(arg1, &arg2, 4)
    sub_662280(arg1, &arg2, 4)
    return sub_66f0f0(arg1)
}
