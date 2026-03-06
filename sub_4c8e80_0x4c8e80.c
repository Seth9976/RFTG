// 函数名称: sub_4c8e80
// 虚拟地址: 0x4c8e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4c8e80(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (data_27e7bb8 == 0)
    if (data_27e7bb8 == 0)
        sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0x133, "NetLocAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* result = sub_4c91b0()
    result[1].d = 0xffffffff
    *result = *arg1
    *(result + 4) = arg1[1]
    *(result + 8) = arg1[2]
    *(result + 0xc) = arg1[3]
    *(result + 0x14) = 1
    *(result + 0x24) = 1
    *(result + 0x28) = 2
    return result
}
