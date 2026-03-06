// 函数名称: sub_4d9620
// 虚拟地址: 0x4d9620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4d9620(int32_t* arg1)
{
    // 第一条实际指令: void* result = data_27e7fe0
    void* result = data_27e7fe0
    *(result + 0x28) = *arg1
    *(result + 0x2c) = arg1[1]
    *(result + 0x30) = arg1[2]
    *(result + 0x34) = arg1[3]
    *(result + 0x38) = 0xffffffff
    return result
}
