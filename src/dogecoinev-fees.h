// Copyright (c) 2021 The Dogecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_ELONCOIN_FEES_H
#define BITCOIN_ELONCOIN_FEES_H

#include "amount.h"
#include "chain.h"
#include "chainparams.h"

#ifdef ENABLE_WALLET

enum FeeRatePreset
{
    MINIMUM,
    LOW,
    MODERATE,
    HIGH,
    VERY_HIGH,
    MAXIMUM
};

/** Estimate fee rate needed to get into the next nBlocks */
CFeeRate GetDogecoinEVFeeRate(int priority);
const std::string GetDogecoinEVPriorityLabel(int priority);
#endif // ENABLE_WALLET
CAmount GetDogecoinEVMinRelayFee(const CTransaction& tx, unsigned int nBytes, bool fAllowFree);
CAmount GetDogecoinEVDustFee(const std::vector<CTxOut> &vout, const CAmount dustLimit);

#endif // BITCOIN_ELONCOIN_FEES_H
